inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 8, 9 }));
  set_short( "Passage - x46y8z9" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y8z9.c",
  "east" : DIR+"/rooms/x47y8z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
