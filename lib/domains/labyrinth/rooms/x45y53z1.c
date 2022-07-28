inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 53, 1 }));
  set_short( "Passage - x45y53z1" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y54z1.c",
  "south" : DIR+"/rooms/x45y52z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
