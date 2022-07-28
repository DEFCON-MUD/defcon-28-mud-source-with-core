inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 61, 4 }));
  set_short( "Passage - x15y61z4" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y62z4.c",
  "south" : DIR+"/rooms/x15y60z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
