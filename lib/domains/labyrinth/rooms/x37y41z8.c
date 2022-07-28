inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 41, 8 }));
  set_short( "Passage - x37y41z8" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y42z8.c",
  "south" : DIR+"/rooms/x37y40z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
