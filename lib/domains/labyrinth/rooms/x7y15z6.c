inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 15, 6 }));
  set_short( "Corridor - x7y15z6" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y16z6.c",
  "south" : DIR+"/rooms/x7y14z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
