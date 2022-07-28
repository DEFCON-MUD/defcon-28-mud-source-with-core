inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 28, 9 }));
  set_short( "Passage - x48y28z9" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y28z9.c",
  "east" : DIR+"/rooms/x49y28z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
