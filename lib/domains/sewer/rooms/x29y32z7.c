inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 32, 7 }));
  set_short( "Hallway - x29y32z7" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y32z7.c",
  "north" : DIR+"/rooms/x29y33z7.c",
  "south" : DIR+"/rooms/x29y31z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
