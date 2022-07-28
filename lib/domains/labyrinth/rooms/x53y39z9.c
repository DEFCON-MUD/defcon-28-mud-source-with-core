inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 39, 9 }));
  set_short( "Corridor - x53y39z9" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y40z9.c",
  "south" : DIR+"/rooms/x53y38z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
