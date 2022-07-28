inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 33, 8 }));
  set_short( "Hallway - x51y33z8" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y34z8.c",
  "south" : DIR+"/rooms/x51y32z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
