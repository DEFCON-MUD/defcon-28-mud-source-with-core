inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 51, 1 }));
  set_short( "Passage - x23y51z1" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y52z1.c",
  "south" : DIR+"/rooms/x23y50z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
