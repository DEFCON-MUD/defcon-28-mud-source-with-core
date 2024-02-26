inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 14, 1 }));
  set_short( "Hallway - x23y14z1" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y14z1.c",
  "east" : DIR+"/rooms/x24y14z1.c",
  "south" : DIR+"/rooms/x23y13z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
