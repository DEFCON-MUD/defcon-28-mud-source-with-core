inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 36, 1 }));
  set_short( "Corridor - x15y36z1" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y36z1.c",
  "east" : DIR+"/rooms/x16y36z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
