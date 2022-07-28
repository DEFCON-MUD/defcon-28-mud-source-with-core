inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 7 }));
  set_short( "Hallway - x19y58z7" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y58z7.c",
  "south" : DIR+"/rooms/x19y57z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
