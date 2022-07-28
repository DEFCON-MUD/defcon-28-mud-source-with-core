inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 23, 7 }));
  set_short( "Passage - x13y23z7" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y24z7.c",
  "south" : DIR+"/rooms/x13y22z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
