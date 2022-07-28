inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 42, 8 }));
  set_short( "Passage - x36y42z8" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y42z8.c",
  "east" : DIR+"/rooms/x37y42z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
