inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 62, 0 }));
  set_short( "Corridor - x53y62z0" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y62z0.c",
  "east" : DIR+"/rooms/x54y62z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
