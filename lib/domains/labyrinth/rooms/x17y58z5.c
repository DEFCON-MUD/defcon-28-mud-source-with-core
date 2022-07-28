inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 58, 5 }));
  set_short( "Hallway - x17y58z5" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y58z5.c",
  "south" : DIR+"/rooms/x17y57z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
