inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 30, 3 }));
  set_short( "Corridor - x45y30z3" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y31z3.c",
  "south" : DIR+"/rooms/x45y29z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
