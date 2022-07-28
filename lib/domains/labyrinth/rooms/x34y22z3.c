inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 22, 3 }));
  set_short( "Passage - x34y22z3" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y22z3.c",
  "east" : DIR+"/rooms/x35y22z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
