inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 22, 7 }));
  set_short( "Passage - x45y22z7" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y23z7.c",
  "south" : DIR+"/rooms/x45y21z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
