inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 48, 9 }));
  set_short( "Hallway - x28y48z9" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y48z9.c",
  "east" : DIR+"/rooms/x29y48z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
