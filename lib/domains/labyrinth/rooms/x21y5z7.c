inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 5, 7 }));
  set_short( "Passage - x21y5z7" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y6z7.c",
  "south" : DIR+"/rooms/x21y4z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
