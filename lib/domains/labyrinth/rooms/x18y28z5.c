inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 28, 5 }));
  set_short( "Corridor - x18y28z5" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y28z5.c",
  "east" : DIR+"/rooms/x19y28z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
