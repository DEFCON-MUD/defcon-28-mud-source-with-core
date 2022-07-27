inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 3 }));
  set_short( "Hallway - x35y36z3" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y36z3.c",
  "south" : DIR+"/rooms/x35y35z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
