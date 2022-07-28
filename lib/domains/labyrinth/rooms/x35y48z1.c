inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 48, 1 }));
  set_short( "Corridor - x35y48z1" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y49z1.c",
  "south" : DIR+"/rooms/x35y47z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
