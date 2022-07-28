inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 58, 8 }));
  set_short( "Corridor - x22y58z8" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y58z8.c",
  "east" : DIR+"/rooms/x23y58z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
