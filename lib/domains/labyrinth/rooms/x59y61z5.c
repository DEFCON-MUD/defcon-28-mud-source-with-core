inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 61, 5 }));
  set_short( "Hallway - x59y61z5" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y62z5.c",
  "south" : DIR+"/rooms/x59y60z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
