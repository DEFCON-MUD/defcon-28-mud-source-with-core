inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 34, 6 }));
  set_short( "Corridor - x12y34z6" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y34z6.c",
  "east" : DIR+"/rooms/x13y34z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
