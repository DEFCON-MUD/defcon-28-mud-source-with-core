inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 24, 4 }));
  set_short( "Passage - x20y24z4" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y24z4.c",
  "east" : DIR+"/rooms/x21y24z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
