inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 22, 5 }));
  set_short( "Hallway - x51y22z5" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y23z5.c",
  "south" : DIR+"/rooms/x51y21z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
