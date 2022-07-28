inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 52, 3 }));
  set_short( "Passage - x25y52z3" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y52z3.c",
  "south" : DIR+"/rooms/x25y51z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
