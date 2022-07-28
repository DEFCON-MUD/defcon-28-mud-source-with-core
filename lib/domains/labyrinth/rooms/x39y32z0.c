inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 32, 0 }));
  set_short( "Passage - x39y32z0" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y32z0.c",
  "north" : DIR+"/rooms/x39y33z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
