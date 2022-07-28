inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 20, 5 }));
  set_short( "Passage - x47y20z5" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y20z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
