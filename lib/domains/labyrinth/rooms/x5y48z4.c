inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 4 }));
  set_short( "Passage - x5y48z4" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y48z4.c",
  "north" : DIR+"/rooms/x5y49z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
