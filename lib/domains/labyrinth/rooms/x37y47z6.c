inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 47, 6 }));
  set_short( "Hallway - x37y47z6" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y48z6.c",
  "south" : DIR+"/rooms/x37y46z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
