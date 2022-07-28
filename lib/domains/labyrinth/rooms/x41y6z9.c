inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 9 }));
  set_short( "Passage - x41y6z9" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y6z9.c",
  "east" : DIR+"/rooms/x42y6z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
