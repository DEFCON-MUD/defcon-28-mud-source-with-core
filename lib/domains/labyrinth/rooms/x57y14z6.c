inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 14, 6 }));
  set_short( "Passage - x57y14z6" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y14z6.c",
  "south" : DIR+"/rooms/x57y13z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
