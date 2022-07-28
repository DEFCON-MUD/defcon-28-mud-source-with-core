inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 18, 2 }));
  set_short( "Corridor - x61y18z2" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y19z2.c",
  "south" : DIR+"/rooms/x61y17z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
