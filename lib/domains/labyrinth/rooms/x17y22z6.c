inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 6 }));
  set_short( "Passage - x17y22z6" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y22z6.c",
  "north" : DIR+"/rooms/x17y23z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
