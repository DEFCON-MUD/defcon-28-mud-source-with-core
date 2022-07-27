inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 44, 9 }));
  set_short( "Hallway - x15y44z9" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y44z9.c",
  "north" : DIR+"/rooms/x15y45z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
