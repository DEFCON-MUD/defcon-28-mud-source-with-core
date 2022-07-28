inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 28, 7 }));
  set_short( "Passage - x5y28z7" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y28z7.c",
  "east" : DIR+"/rooms/x6y28z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
