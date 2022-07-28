inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 61, 2 }));
  set_short( "Corridor - x21y61z2" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y62z2.c",
  "south" : DIR+"/rooms/x21y60z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
