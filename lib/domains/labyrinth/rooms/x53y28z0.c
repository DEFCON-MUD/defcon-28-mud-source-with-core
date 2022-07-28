inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 28, 0 }));
  set_short( "Passage - x53y28z0" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y29z0.c",
  "south" : DIR+"/rooms/x53y27z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
