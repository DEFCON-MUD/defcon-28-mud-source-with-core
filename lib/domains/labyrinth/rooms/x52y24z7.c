inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 24, 7 }));
  set_short( "Hallway - x52y24z7" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y24z7.c",
  "east" : DIR+"/rooms/x53y24z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
