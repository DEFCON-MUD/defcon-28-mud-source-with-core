inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 50, 9 }));
  set_short( "Passage - x4y50z9" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y50z9.c",
  "east" : DIR+"/rooms/x5y50z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
