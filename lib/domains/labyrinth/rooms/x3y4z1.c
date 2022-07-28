inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 1 }));
  set_short( "Passage - x3y4z1" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y4z1.c",
  "north" : DIR+"/rooms/x3y5z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
