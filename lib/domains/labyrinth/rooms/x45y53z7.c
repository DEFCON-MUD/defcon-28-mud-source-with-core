inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 53, 7 }));
  set_short( "Hallway - x45y53z7" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y54z7.c",
  "south" : DIR+"/rooms/x45y52z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
