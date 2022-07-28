inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 46, 8 }));
  set_short( "Corridor - x49y46z8" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y47z8.c",
  "south" : DIR+"/rooms/x49y45z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
