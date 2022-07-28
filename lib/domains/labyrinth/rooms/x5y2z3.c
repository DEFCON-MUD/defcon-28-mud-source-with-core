inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 2, 3 }));
  set_short( "Passage - x5y2z3" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y2z3.c",
  "east" : DIR+"/rooms/x6y2z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
