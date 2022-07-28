inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 48, 6 }));
  set_short( "Passage - x42y48z6" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y48z6.c",
  "east" : DIR+"/rooms/x43y48z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
