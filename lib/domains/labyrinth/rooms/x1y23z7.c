inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 23, 7 }));
  set_short( "Passage - x1y23z7" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y24z7.c",
  "south" : DIR+"/rooms/x1y22z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
