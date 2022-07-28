inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 22, 1 }));
  set_short( "Passage - x27y22z1" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y22z1.c",
  "south" : DIR+"/rooms/x27y21z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
