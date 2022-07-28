inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 21, 8 }));
  set_short( "Hallway - x41y21z8" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y22z8.c",
  "south" : DIR+"/rooms/x41y20z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
