inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 29, 0 }));
  set_short( "Passage - x61y29z0" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y30z0.c",
  "south" : DIR+"/rooms/x61y28z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
