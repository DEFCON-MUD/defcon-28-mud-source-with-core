inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 39, 5 }));
  set_short( "Passage - x47y39z5" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y40z5.c",
  "south" : DIR+"/rooms/x47y38z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
